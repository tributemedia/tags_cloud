<?php
/**
 * @file
 * tags_cloud.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tags_cloud_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-archive-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'archive-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'blog*
tags*
archive*',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'material_theme',
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-tags_cloud-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tags_cloud-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'blog*
tags*
archive*',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'material_theme',
        'weight' => -26,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
