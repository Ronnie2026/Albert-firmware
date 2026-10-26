/* Firmware entry: 0x4ff3ea4a */

undefined4 * FUN_ram_4ff3ea4a(code *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 extraout_a2;
  undefined4 *__s;
  ulonglong uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  (*param_1)(param_2);
  uVar1 = FUN_ram_4ff3c612(0);
  sVar2 = strlen(s_FreeRTOS__FreeRTOS_Task___ram_4ff4c524);
  uVar1 = FUN_ram_4819b714(s_FreeRTOS__FreeRTOS_Task___ram_4ff4c524 + sVar2,uVar1);
  FUN_ram_4ff45158(uVar1,"\" should not return, Aborting now!",0x23);
  uVar3 = FUN_ram_4ff37718(s_FreeRTOS__FreeRTOS_Task___ram_4ff4c524);
  if ((uVar3 & 0xf) == 0) {
    __s = (undefined4 *)((int)uVar3 - 0x18U & 0xfffffff0);
    *__s = 0;
    __s[1] = 0;
    __s[2] = 0;
    __s[3] = 0;
    __s[4] = 0;
    __s[5] = 0;
    FUN_ram_4ff45158(__s,0x4823c318,0);
    memset(__s,0,0);
    memset(__s + -0x27,0,0x90);
    __s[-0x1e] = (int)(uVar3 >> 0x20);
    __s[-0x1d] = extraout_a2;
    __s[-0x28] = FUN_ram_4ff3ea4a;
    __s[-0x24] = __s;
    __s[-0x25] = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return __s + -0x28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("port.c",0x1a4,"pxPortInitialiseStack","(uxStackPointer & ( 0x000f )) == 0");
}


