<?php
/**
 * @file
 * hot_topic.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hot_topic_user_default_permissions() {
  $permissions = array();

  // Exported permission: create hot_topic content
  $permissions['create hot_topic content'] = array(
    'name' => 'create hot_topic content',
    'roles' => array(),
  );

  // Exported permission: delete any hot_topic content
  $permissions['delete any hot_topic content'] = array(
    'name' => 'delete any hot_topic content',
    'roles' => array(),
  );

  // Exported permission: delete own hot_topic content
  $permissions['delete own hot_topic content'] = array(
    'name' => 'delete own hot_topic content',
    'roles' => array(),
  );

  // Exported permission: edit any hot_topic content
  $permissions['edit any hot_topic content'] = array(
    'name' => 'edit any hot_topic content',
    'roles' => array(),
  );

  // Exported permission: edit own hot_topic content
  $permissions['edit own hot_topic content'] = array(
    'name' => 'edit own hot_topic content',
    'roles' => array(),
  );

  return $permissions;
}
