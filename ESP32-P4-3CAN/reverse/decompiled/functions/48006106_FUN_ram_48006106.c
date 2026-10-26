/* Firmware entry: 0x48006106 */

undefined4 FUN_ram_48006106(undefined4 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (undefined8 *)0x0) {
    FUN_ram_4ff216d6(&DAT_ram_4ff6da84);
    lVar3 = FUN_ram_48005d3a();
    FUN_ram_4ff216e2(&DAT_ram_4ff6da84);
    lVar4 = FUN_ram_481a9d86();
    uVar2 = (undefined4)(lVar3 + lVar4);
    uVar1 = (undefined4)((ulonglong)(lVar3 + lVar4) >> 0x20);
    uVar5 = __udivdi3(uVar2,uVar1,1000000,0);
    *param_2 = uVar5;
    uVar1 = __umoddi3(uVar2,uVar1,1000000,0);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return 0;
  }
  return 0;
}


