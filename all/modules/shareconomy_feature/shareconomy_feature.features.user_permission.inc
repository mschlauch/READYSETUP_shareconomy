<?php
/**
 * @file
 * shareconomy_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function shareconomy_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create shareable content.
  $permissions['create shareable content'] = array(
    'name' => 'create shareable content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any shareable content.
  $permissions['edit any shareable content'] = array(
    'name' => 'edit any shareable content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
