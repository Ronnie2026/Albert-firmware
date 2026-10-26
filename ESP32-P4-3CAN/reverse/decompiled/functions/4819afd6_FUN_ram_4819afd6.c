/* Firmware entry: 0x4819afd6 */

void FUN_ram_4819afd6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *apuStack_98 [2];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_8c = 0xffff0288;
  apuStack_98[0] = (undefined1 *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_18 = param_3;
  uStack_14 = param_4;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  uVar1 = FUN_ram_4ff3e8de();
  iVar2 = FUN_ram_481a0866(uVar1,apuStack_98,param_2,&uStack_18);
  if (-1 < iVar2) {
    *apuStack_98[0] = 0;
    *param_1 = uStack_88;
  }
  return;
}


