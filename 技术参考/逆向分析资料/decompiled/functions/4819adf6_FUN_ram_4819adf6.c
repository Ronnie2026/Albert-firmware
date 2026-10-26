/* Firmware entry: 0x4819adf6 */

void FUN_ram_4819adf6(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 *apuStack_98 [2];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined4 uStack_84;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_84 = 0x7fffffff;
  uStack_90 = 0x7fffffff;
  uStack_8c = 0xffff0208;
  apuStack_98[0] = param_1;
  puStack_88 = param_1;
  uStack_18 = param_3;
  uStack_14 = param_4;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  uVar1 = FUN_ram_4ff3e8de();
  FUN_ram_481a0866(uVar1,apuStack_98,param_2,&uStack_18);
  *apuStack_98[0] = 0;
  return;
}


