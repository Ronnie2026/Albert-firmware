/* Firmware entry: 0x481607da */

undefined4
FUN_ram_481607da(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = (undefined1 *)0x8c000000;
  if ((int)param_3 < 0) {
    param_3 = param_3 & 0x7fffffff;
    puVar3 = &DAT_ram_88000000;
  }
  iVar1 = (**(code **)(param_1 + 0x60))
                    (*(undefined4 *)(param_1 + 4),param_4,param_5,param_4,param_5,
                     *(code **)(param_1 + 0x60));
  if (iVar1 != 0) {
    uVar2 = FUN_ram_481604a4(param_1,param_2,param_3,puVar3,param_4,param_5);
    return uVar2;
  }
  return 0x102;
}


