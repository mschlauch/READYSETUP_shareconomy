<?php
/**
 * @file
 * shareconomy_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function shareconomy_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function shareconomy_feature_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function shareconomy_feature_node_info() {
  $items = array(
    'shareable' => array(
      'name' => t('Shareable'),
      'base' => 'node_content',
      'description' => t('this is something you want to share... this could be an information or an object or skill you want to give to somebody'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
