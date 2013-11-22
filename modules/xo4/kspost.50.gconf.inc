# Add the information about the model to display in the sugar ui
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults -s /desktop/sugar/extensions/aboutcomputer/hardware_model XO-duo --type string
