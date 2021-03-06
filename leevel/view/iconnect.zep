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

namespace Leevel\View;

/**
 * iconnect 接口
 *
 * @author Xiangmin Liu <635750556@qq.com>
 *
 * @since 2018.01.02
 * @version 1.0
 */
interface IConnect
{
    /**
     * 加载视图文件
     *
     * @param string $file 视图文件地址
     * @param array $vars
     * @param string $ext 后缀
     * @param boolean $display 是否显示
     * @return void|string
     */
    public function display(string file, array! vars = [], var ext = null, boolean display = true);

    /**
     * 设置模板变量
     *
     * @param mixed $name
     * @param mixed $value
     * @return void
     */
    public function setVar(var name, var value = null);

    /**
     * 获取变量值
     *
     * @param string|null $name
     * @return mixed
     */
    public function getVar(var name = null);

    /**
     * 删除变量值
     *
     * @param array $name
     * @return $this
     */
    public function deleteVar(array name);

    /**
     * 清空变量值
     *
     * @return $this
     */
    public function clearVar();
}
