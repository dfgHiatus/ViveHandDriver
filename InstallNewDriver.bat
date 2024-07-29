taskkill/im vrmonitor.exe
timeout /t 5
"G:\Steam\steamapps\common\SteamVR\bin\win64\vrpathreg.exe" adddriver "%cd%"
python install_overlay.py
timeout /t 5
"G:\Steam\steamapps\common\SteamVR\bin\win64\vrmonitor.exe"