<?php
/**
 * @file
 * shareconomy_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function shareconomy_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-shareconomy:node/add/shareable
  $menu_links['menu-shareconomy:node/add/shareable'] = array(
    'menu_name' => 'menu-shareconomy',
    'link_path' => 'node/add/shareable',
    'router_path' => 'node/add/shareable',
    'link_title' => 'Share something',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-shareconomy:shareables
  $menu_links['menu-shareconomy:shareables'] = array(
    'menu_name' => 'menu-shareconomy',
    'link_path' => 'shareables',
    'router_path' => 'shareables',
    'link_title' => 'Find shareables',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:import/shareables_importer
  $menu_links['navigation:import/shareables_importer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import/shareables_importer',
    'router_path' => 'import/%',
    'link_title' => 'Shareables Import',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:shareables-export
  $menu_links['navigation:shareables-export'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'shareables-export',
    'router_path' => 'shareables-export',
    'link_title' => 'Shareables Export',
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
  t('Find shareables');
  t('Share something');
  t('Shareables Export');
  t('Shareables Import');


  return $menu_links;
}
