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

namespace Tests\Validate\Validator;

use Leevel\Validate\Validator;
use Tests\TestCase;

/**
 * digit test.
 *
 * @author Xiangmin Liu <635750556@qq.com>
 *
 * @since 2018.08.08
 *
 * @version 1.0
 */
class DigitTest extends TestCase
{
    /**
     * @dataProvider baseUseProvider
     *
     * @param mixed $value
     */
    public function testBaseUse($value)
    {
        $validate = new Validator(
            [
                'name' => $value,
            ],
            [
                'name'     => 'digit',
            ]
        );

        $this->assertTrue($validate->success());
    }

    public function baseUseProvider()
    {
        return [
            ['01'],
            ['0'],
            ['10002'],
            ['42'],
        ];
    }

    /**
     * @dataProvider badProvider
     *
     * @param mixed $value
     */
    public function testBad($value)
    {
        $validate = new Validator(
            [
                'name' => $value,
            ],
            [
                'name'     => 'digit',
            ]
        );

        $this->assertFalse($validate->success());
    }

    public function badProvider()
    {
        return [
            ['1820.20'],
            ['wsl!12'],
            [-42],
            [42],
            ['2018-12-42'],
            [''],
            [[1, 2]],
        ];
    }
}
