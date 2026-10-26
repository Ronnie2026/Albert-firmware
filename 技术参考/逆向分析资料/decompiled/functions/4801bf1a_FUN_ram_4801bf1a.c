/* Firmware entry: 0x4801bf1a */

uint FUN_ram_4801bf1a(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = &DAT_ram_481b886c;
  param_1[1] = 6;
  param_1[2] = 0;
  *param_1 = 1;
  puVar3 = param_1 + 3;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar3 = uVar1;
    puVar2 = PTR_PTR_ram_4ff47e40;
    puVar3 = puVar3 + 1;
  } while (puVar4 != &UNK_ram_481b8872);
  param_1[10] = (char)param_3;
  param_1[9] = 2;
  param_1[0xb] = (char)(param_3 >> 8);
  (**(code **)puVar2)(param_1 + 0xc,param_2,param_3,2,param_3 >> 8,*(code **)puVar2);
  return param_3 + 0xc & 0xffff;
}


