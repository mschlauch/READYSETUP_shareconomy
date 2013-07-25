<?php
/**
 * @file
 * shareconomy_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function shareconomy_feature_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 2,
  );

  return $roles;
}
