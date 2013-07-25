<?php
/**
 * @file
 * anonymous_abuse_report.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function anonymous_abuse_report_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function anonymous_abuse_report_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function anonymous_abuse_report_node_info() {
  $items = array(
    'abuse_report' => array(
      'name' => t('Abuse report'),
      'base' => 'node_content',
      'description' => t('signal offensive behavior or offensive content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
