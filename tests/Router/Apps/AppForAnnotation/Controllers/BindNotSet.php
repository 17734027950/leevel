<?php

declare(strict_types=1);

/*
 * This file is part of the ************************ package.
 * _____________                           _______________
 *  ______/     \__  _____  ____  ______  / /_  _________
 *   ____/ __   / / / / _ \/ __`\/ / __ \/ __ \/ __ \___
 *    __/ / /  / /_/ /  __/ /  \  / /_/ / / / / /_/ /__
 *      \_\ \_/\____/\___/_/   / / .___/_/ /_/ .___/
 *         \_\                /_/_/         /_/
 *
 * The PHP Framework For Code Poem As Free As Wind. <Query Yet Simple>
 * (c) 2010-2018 http://queryphp.com All rights reserved.
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

/**
 * @OA\Get(
 *     path="/bindNotSet/test",
 *     tags={"pet"},
 *     summary="Just test the router",
 *     operationId="petLeevel",
 *     @OA\Parameter(
 *         name="petId",
 *         in="path",
 *         description="ID of pet to return",
 *         required=true,
 *         @OA\Schema(
 *             type="integer",
 *             format="int64"
 *         )
 *     ),
 *     @OA\Response(
 *         response=405,
 *         description="Invalid input"
 *     ),
 *     security={
 *         {"petstore_auth": {"write:pets", "read:pets"}}
 *     },
 *     requestBody={"$ref": "#/components/requestBodies/Pet"}
 * )
 */
function foo()
{
}

/**
 * @OA\Get(
 *     path="/bindNotSet/test2",
 *     tags={"pet"},
 *     summary="Just test the router",
 *     operationId="petLeevel",
 *     @OA\Parameter(
 *         name="petId",
 *         in="path",
 *         description="ID of pet to return",
 *         required=true,
 *         @OA\Schema(
 *             type="integer",
 *             format="int64"
 *         )
 *     ),
 *     @OA\Response(
 *         response=405,
 *         description="Invalid input"
 *     ),
 *     security={
 *         {"petstore_auth": {"write:pets", "read:pets"}}
 *     },
 *     requestBody={"$ref": "#/components/requestBodies/Pet"},
 *     leevelBind=""
 * )
 */
function bar()
{
}
