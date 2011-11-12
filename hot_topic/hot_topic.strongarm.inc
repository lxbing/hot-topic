<?php
/**
 * @file
 * hot_topic.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hot_topic_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_hot_topic';
  $strongarm->value = '0';
  $export['comment_anonymous_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_hot_topic';
  $strongarm->value = 1;
  $export['comment_default_mode_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_hot_topic';
  $strongarm->value = '50';
  $export['comment_default_per_page_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_hot_topic';
  $strongarm->value = 1;
  $export['comment_form_location_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_hot_topic';
  $strongarm->value = '2';
  $export['comment_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_hot_topic';
  $strongarm->value = '1';
  $export['comment_preview_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_hot_topic';
  $strongarm->value = 1;
  $export['comment_subject_field_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_hot_topic';
  $strongarm->value = '1';
  $export['language_content_type_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_hot_topic';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_hot_topic';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_hot_topic';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_hot_topic';
  $strongarm->value = '1';
  $export['node_preview_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_hot_topic';
  $strongarm->value = 1;
  $export['node_submitted_hot_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_hot_topic';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_hot_topic'] = $strongarm;

  return $export;
}
