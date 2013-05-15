/*
 * Copyright 2013 Luciad (http://www.luciad.com)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef GPKG_TABLES_H
#define GPKG_TABLES_H

#include "sql.h"

/**
 * \addtogroup tables Geopackage table definitions
 * @{
 */

/**
 * Description of the geopackage_contents table.
 */
extern table_info_t geopackage_contents;

/**
 * Description of the spatial_ref_sys table.
 */
extern table_info_t spatial_ref_sys;

/**
 * Description of the geometry_columns table.
 */
extern table_info_t geometry_columns;

/**
 * Description of the raster_columns table.
 */
extern table_info_t raster_columns;

/**
 * Description of the tile_table_metadata table.
 */
extern table_info_t tile_table_metadata;

/**
 * Description of the tile_matrix_metadata table.
 */
extern table_info_t tile_matrix_metadata;

/**
 * Description of the xml_metadata table.
 */
extern table_info_t xml_metadata;

/**
 * Description of the metadata_reference table.
 */
extern table_info_t metadata_reference;

/**
 * Description of the manifest table.
 */
extern table_info_t manifest;

/**
 * Description of the columns for a tiles table.
 */
extern const column_info_t tiles_table_columns[];

/**
 * Null terminated array of all geopacakge metadata table descriptions.
 */
extern const table_info_t * const tables[];

/** @} */

#endif