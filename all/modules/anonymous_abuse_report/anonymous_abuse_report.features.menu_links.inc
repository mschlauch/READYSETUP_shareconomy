<?php
/**
 * @file
 * anonymous_abuse_report.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function anonymous_abuse_report_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:editor-abuses
  $menu_links['navigation:editor-abuses'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'editor-abuses',
    'router_path' => 'editor-abuses',
    'link_title' => 'Editor-Abuses',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Editor-Abuses');


  return $menu_links;
}
