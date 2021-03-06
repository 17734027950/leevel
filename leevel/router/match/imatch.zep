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

namespace Leevel\Router\Match;

use Leevel\Http\IRequest;
use Leevel\Router\IRouter;

/**
 * 路由匹配接口
 *
 * @author Xiangmin Liu <635750556@qq.com>
 *
 * @since 2018.02.12
 * @version 1.0
 */
interface IMatch
{
    /**
     * 匹配数据项
     *
     * @param \Leevel\Router\IRouter $router
     * @param \Leevel\Http\IRequest $request
     * @return array
     */
    public function matche(<IRouter> router, <IRequest> request) -> array;
}
