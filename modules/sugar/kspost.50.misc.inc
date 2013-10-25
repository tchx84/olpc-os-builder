mkdir -p /home/olpc/{Activities,Library}
chown olpc:olpc /home/olpc/{Activities,Library}

# Remove non-functional squeak menu entry (#10480)
# FIXME: remove when squeak-vm-4.x is adopted, where this change is
# already included.
rm -f /usr/share/applications/squeak.desktop
update-desktop-database &> /dev/null || :

# Add sugar fonts configuration file

cat <<EOF >> /etc/sugar_fonts
abc123
Sans
Serif
Monospace
OpenDyslexic
EOF

# Add sugar-client config file
cat <<EOF >> /etc/sugar-client.conf
[stats]
enabled = False
EOF

# Add sugar connections profile file
cat <<EOF >> /etc/sugar_connection_profiles.ini
[Queensland Proxy]
type = proxy
title = Queensland

use_authentication = 1
authentication_user = REQUEST
authentication_password = REQUEST
 
mode = manual
use_http_proxy = 1
http_proxy.host = proxy2.eq.edu.au
http_proxy.port = 80
use_same_proxy = 1
ignore_hosts = schoolserver,server,localhost,127.0.0.0/8


[Queensland AP]
type = connectivity
title = Queensland

connection.id = QDETA-X
connection.type = 802-11-wireless

802-11-wireless.ssid = QDETA-X
802-11-wireless.security = 802-11-wireless-security

802-1x.eap = peap
802-1x.identity = REQUEST
802-1x.phase2-auth = mschapv2
802-1x.password = REQUEST

ipv4.method = auto

802-11-wireless-security.key-mgmt = wpa-eap
EOF
