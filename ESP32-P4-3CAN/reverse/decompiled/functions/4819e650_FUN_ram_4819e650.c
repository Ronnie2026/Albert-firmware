/* Firmware entry: 0x4819e650 */

void FUN_ram_4819e650(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  char *pcStack_98;
  size_t sStack_94;
  undefined *puStack_8c;
  undefined2 uStack_8a;
  char *pcStack_88;
  size_t sStack_84;
  undefined1 *puStack_74;
  undefined4 uStack_64;
  undefined4 uStack_50;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_8c = &vsie;
  pcStack_98 = param_1;
  pcStack_88 = param_1;
  uStack_18 = param_3;
  uStack_14 = param_4;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  sStack_94 = strlen(param_1);
  puStack_74 = &LAB_ram_4819ae7e;
  uStack_8a = 0xffff;
  uStack_64 = 0;
  uStack_50 = 0;
  sStack_84 = sStack_94;
  uVar1 = FUN_ram_4ff3e8de();
  FUN_ram_4819e9b0(uVar1,&pcStack_98,param_2,&uStack_18);
  return;
}


