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

namespace Leevel\Http;

/**
 * response header bag
 *
 * @author Xiangmin Liu <635750556@qq.com>
 *
 * @since 2018.03.05
 * @version 1.0
 */
class ResponseHeaderBag extends HeaderBag
{
    /**
     * 下载附件
     *
     * @var string
     */
    const DISPOSITION_ATTACHMENT = "attachment";

    /**
     * 文件直接读取
     *
     * @var string
     */
    const DISPOSITION_INLINE = "inline";
}
