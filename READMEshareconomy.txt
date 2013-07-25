Shareconomy
Michael Schlauch, www.rhizomaticdesign.net

licensed under GNU GPLv3, Opensource, attribution is appreciated

Goal:
Community development
A simple, easy to maintain, reliable, cost-efficient online tool that enables communities and neighborhoods to support sharing and to further social interactions in real life. An interactive map makes it possible to find interesting items nearby. 

Respect for sensitive data
Users can publish offers and observations about their surrounding environment anonymously, without the need to register. They can however supply their email address that doesn't get published. Interested persons can contact them by using a contact form.

Easy to maintain, openness
Their is an editor role for maintenance accounts. An editor can review abuses and violating content that has been reported, delete or edit it. Also he has the capability to export all or part of all submitted data as csv. Equally he can import map items by providing another csv file. This a very convenient interface for backups, system restores etc.
Also there is an integrated RSS-feed (rss symbol at the bottom of the page), that can perhaps feed twitter or facebook fanpages by services like twitterfeed.com without revealing sensitive user data.

Simplicity, reliability, efficiency
The application is essentially made up of only two views: the interactive map and a submit form for new entries.
The system is thought of as a local website every community can setup, adapt and maintain indipendently from each other. In fact a local group of initial supporters is crucial for the success of the system as it is not aimed at building a “parallel” universe but founded in real life interactions.

Possible use cases:

- share objects, services, skills, hospitality, facilitate time banks, LET-systems, gift economy
- assess and value abandoned fruit trees or any other kind of resource
local development participation by giving community members the possibility to post opinions about places, buildings etc.
-assess valuable tourist information or consumer information (biologic food etc.), nice places...

Adaptation work:
there is one admin user (name admin, pass: admin) and an editor (name: editor, pass:editor)

What is needed to make the shareconomy web system work in your community:

- adapt design theme (mobile compatibility), position and name blocks ("View: Report abuse", "Menu Shareconomy")
- adapt content type "shareable", display of content and teaser
- adapt language, field labels, descriptions
- terms of service statement
- adapt, add or remove taxonomy terms "Category": name the various categories and the internal link (map_icon_url) that links to the respective map icon you can provide
- map behavior can be modified, initial position and zooming is currently dynamic according to items, but it can be changed to always display one city as well
- create other riddles or install another captcha submodule, make sure that there is an effective spam protection on the shareable-submit form, on the contact form and on the report-abuse-form

Important notes:
- the views_dataexport module caused error accessing "configuration" menu, current development version resolved issue
- the geofield module 7.2beta is not yet sufficiently reliable for proximity search, instead geofield 7.1 is used, instead of proximity search a simple filter of the address text field ("city"
- every item displays "created by anonymous...", this can be removed by theming https://drupal.org/node/364470
- currently there is "simple Oembed" installed: expands links to flickr, youtube, photobucket etc. so that user has not to leave the page to view them. The module "advanced text formatter" was needed to ensure that there are no youtube iframes etc. in the teaser display of the items.
- I replaced the .htaccess file to work accordingly with my server setup. You can put the original drupal .htaccess file there too.
- tested and developed with drupal core 7.22
___________________________________________

Readme for standalone shareconomy_feature
setup-steps:
1. Position the menu "shareconomy" wherever you like
2. setup captcha in contact form, create_shareable
3. Add taxonomy terms in "Category" including internal map_icon_link to assign an icon
4. Setup in the plain text filter to switch on soembed filtering
5. feel free to test as an anonymous user
Note: the current version (july 2013) of views_dataexport keeps producing an error when I go to configuration page, the dev version resolved this issue

Readme for anonymous_abuse_report feature
1. setup captcha in create_abuse_report form
2. enable views_ui and open up the view "Report abuse", edit the field NID that produces the link to the report form (you can also open and close it) - otherwise internal link doesn't work
3. position the "Views: Report Abuse" block whereever you like
4. Assign the correct permissions to allow the editor role to review the requests (in view "editor abuses"
 
Best regards
Michael




