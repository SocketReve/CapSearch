#!/usr/bin/env python

__author__= "Reverberi Luca"

'''    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    
'''

from gui import *
import sqlite3
import sys


class rendering(QtGui.QDialog):
	''' Classe della finestra'''
	def __init__(self):
		self.active = True
		self.app = QtGui.QApplication([]) 							# Crea un'applicazione Qt, ...
		self.Dialog = QtGui.QDialog() 								# ... un dialogo, ...
		self.ui = Ui_Dialog() 									# ... e una user interface.
		self.ui.setupUi(self.Dialog) 								# Infila il dialog nella user interface
		self.app.setQuitOnLastWindowClosed(False)

		self.createTrayIcon()
		
		# Segnali:	
		self.Systray.activated.connect(self.iconActivated)
		#
		
		self.Dialog.show()
        	return self.app.exec_() 


	# Funzioni di segnali:
	def on_buttonSearch_clicked(self):
  		self.ui.lineCap.setText(unicode(self.query(self.ui.lineProv.text(),self.ui.lineComune.text(),self.ui.lineLocal.text())))
  	
  	def on_buttonExit_clicked(self):
  		sys.exit(self.app.exec_())
  	#
  	
  	
  	def createTrayIcon(self):
        	icona = QtGui.QIcon("cap.png")
        	self.Systray=QtGui.QSystemTrayIcon(icona)
        	self.Systray.show()

  	def iconActivated(self, reason):
  		if reason == QtGui.QSystemTrayIcon.Trigger:
  			if self.active == True:
  				self.Dialog.hide()
  				self.active = False
  				
  			elif self.active == False:
  				self.Dialog.show()
  				self.active = True


	def query(self,provincia,comune,localita=None):
		con = sqlite3.connect("databaseCap.db")
		cur = con.cursor()
		provincia=unicode(provincia)
		comune=unicode(comune)
		localita=unicode(localita)
	
		if localita=="":
			cur.execute("SELECT capi_cap FROM tab_cap WHERE prov_cap = '"+provincia.upper()+"' AND comu_cap = '"+comune.upper()+"'")
		else:
			cur.execute("SELECT capi_cap FROM tab_cap WHERE prov_cap = '"+provincia.upper()+"' AND comu_cap = '"+comune.upper()+"' AND fraz_cap = '"+localita.upper()+"' OR topo_cap = '"+localita.upper()+"'")
		var = cur.fetchone()
	
		if var==None:
			return "Errore"
		else:
			return var[0]


if __name__ == "__main__":
	var = rendering()									# mostra il dialog precedentemente creato
