<?php
/**
 * @file
 * shareconomy_feature.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function shareconomy_feature_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'clone_of_example_osm';
  $openlayers_maps->title = 'Shareable Display Map';
  $openlayers_maps->description = 'Map to show the shareables';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0, 0',
        'zoom' => '3',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'shareables_openlayers_1' => 'shareables_openlayers_1',
        ),
        'panMapIfOutOfView' => 1,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoompanel' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'shareables_openlayers_1' => 'shareables_openlayers_1',
          'osm_mapnik' => 0,
          'osm_cycle' => 0,
        ),
        'point_zoom_level' => '16',
        'zoomtolayer_scale' => '1',
      ),
      'openlayers_behavior_zoomtomaxextent' => array(),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'osm_cycle' => 'osm_cycle',
      'shareables_openlayers_1' => 'shareables_openlayers_1',
    ),
    'layer_weight' => array(
      'shareables_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'shareables_openlayers_1' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'shareables_openlayers_1' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'shareables_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'shareables_openlayers_1' => 'shareables_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'shareables_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'custom_style',
      'select' => 'default_marker_gold',
      'temporary' => 'default_marker_green',
    ),
  );
  $export['clone_of_example_osm'] = $openlayers_maps;

  return $export;
}
