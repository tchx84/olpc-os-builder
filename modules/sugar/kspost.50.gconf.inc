# Sugar font (AU use abc123)
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type float --set /desktop/sugar/font/default_size 7
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type string --set /desktop/sugar/font/default_face abc123

# disable logout button in Sugar
gconftool-2 --direct --config-source=xml:readwrite:/etc/gconf/gconf.xml.defaults -s -t bool /desktop/sugar/show_logout false

# set sugar power management on
gconftool-2 --direct --config-source=xml:readwrite:/etc/gconf/gconf.xml.defaults -s -t bool /desktop/sugar/power/automatic true

# set empty jabber server so that no gabble connection is attempted by default
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type string --set /desktop/sugar/collaboration/jabber_server ''

# Ask for the nick name when starting Sugar the first time
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type string --set /desktop/sugar/user/default_nick 'disabled'

# Use microformat back end for updater
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type string --set /desktop/sugar/update/backend microformat.MicroformatUpdater

# microformat updater url to use.
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type string --set /desktop/sugar/update/microformat_update_url http://wiki.laptop.org/go/Activities/OLPCAU/ARM-test-addons/13.2.0

# Enable microformat updater.
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type int --set /desktop/sugar/update/auto_update_frequency 1

# Set max activities open
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type int --set /desktop/sugar/maximum_number_of_open_activities 4

# preset GSM
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type=string --set /desktop/sugar/network/gsm/country au
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type=string --set /desktop/sugar/network/gsm/provider Telstra
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type int --set /desktop/sugar/network/gsm/plan 2
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults --type=string --set /desktop/sugar/network/gsm/apn telstra.internet

# enable control panel network hidden network section
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults -s --type boolean /desktop/sugar/extensions/network/conf_hidden_ssid true

# Set Write default font
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults -s --type string /desktop/sugar/activities/write/font_face Sans
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults -s --type int /desktop/sugar/activities/write/font_size 20

# Harvest statistics service configuration
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults -s /desktop/sugar/collaboration/harvest_api_key V9iIS8EBC7Aho2EDeeKCg7K9QB8Ue9K4 --type string
gconftool-2 --direct --config-source xml:readwrite:/etc/gconf/gconf.xml.defaults -s /desktop/sugar/collaboration/harvest_hostname https://harvest.one-education.org --type string
