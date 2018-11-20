# appc-maccaddress
appcelerator module for android to get mac address on devices with android OS version 6+.

Este modulo permite extraer la mac address en dispositivos con sistema operativo android 6 o mayor.

El modulo se creo usando a la clase compartida por robin henniges:

(https://robinhenniges.com/android-6-0-you-can-no-longer-access-the-mac-address-you-can/)



## Instalacion del modulo
Descarga el modulo.zip que se encuentra en la carpeta /android/dist del proyecto 


### Uso

Agregar el modulo usando el IDE de appcelerator o bien extrayendo el contenido del .zip en la carpeta /modules/android/

Edita la seccion <modules> en el tiapp.xml:
```
<modules>
    <module platform="android">com.ibilis.macaddress</module>
</modules>
```

Por ultimo agregar los siguientes permisos al manifest dentro del tiapp.xm:

```
<uses-permission android:name="android.permission.INTERNET"/>
<uses-permission android:name="android.permission.ACCESS_WIFI_STATE"/>
```


Para obtener la mac address del dispositivo:

```
//importar el modulo
var macaddress = require('com.ibilis.macaddress');
//llamar a la funcion 
var macaddres = macaddress.getMacAddr();
Ti.API.info(macaddres)
```
