<?php
/**
 * @file
 * anonymous_abuse_report.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function anonymous_abuse_report_user_default_permissions() {
  $permissions = array();

  // Exported permission: create abuse_report content.
  $permissions['create abuse_report content'] = array(
    'name' => 'create abuse_report content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any abuse_report content.
  $permissions['edit any abuse_report content'] = array(
    'name' => 'edit any abuse_report content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
