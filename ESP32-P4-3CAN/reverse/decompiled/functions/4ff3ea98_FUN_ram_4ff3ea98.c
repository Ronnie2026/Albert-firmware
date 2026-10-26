/* Firmware entry: 0x4ff3ea98 */

undefined4 * FUN_ram_4ff3ea98(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 & 0xf) == 0) {
    __s = (undefined4 *)(param_1 - 0x18 & 0xfffffff0);
    *__s = 0;
    __s[1] = 0;
    __s[2] = 0;
    __s[3] = 0;
    __s[4] = 0;
    __s[5] = 0;
    FUN_ram_4ff45158(__s,0x4823c318,0);
    memset(__s,0,0);
    memset(__s + -0x27,0,0x90);
    __s[-0x1e] = param_2;
    __s[-0x1d] = param_3;
    __s[-0x28] = FUN_ram_4ff3ea4a;
    __s[-0x24] = __s;
    __s[-0x25] = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return __s + -0x28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("port.c",0x1a4,"pxPortInitialiseStack","(uxStackPointer & ( 0x000f )) == 0");
}


