# Add the information about the model to display in the sugar ui
cat >/usr/share/glib-2.0/schemas/sugar.oob.xo4.gschema.override <<EOF
[org.sugarlabs.extensions.aboutcomputer]
hardware-model='XO-duo'
EOF
/usr/bin/glib-compile-schemas /usr/share/glib-2.0/schemas
