<?php
/**
 * @file
 * stanford_fwb.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_fwb_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_fwb_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function stanford_fwb_image_default_styles() {
  $styles = array();

  // Exported image style: full-width-banner.
  $styles['full-width-banner'] = array(
    'label' => 'full-width-banner',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
