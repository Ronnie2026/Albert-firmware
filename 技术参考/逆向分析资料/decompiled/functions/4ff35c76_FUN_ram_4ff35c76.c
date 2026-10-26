/* Firmware entry: 0x4ff35c76 */

void FUN_ram_4ff35c76(uint param_1,uint param_2,uint *param_3,uint param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    puVar1 = &LAB_ram_4ff35bb2;
    pcVar6 = (code *)&LAB_ram_4ff35f62;
    puVar5 = &LAB_ram_4ff357cc;
    pcVar2 = FUN_ram_4ff3562a;
    puVar3 = &LAB_ram_4ff36182;
    uVar4 = ((param_1 >> 1) + 3 & 0xfffffffc) - 8;
  }
  else if (param_2 == 1) {
    puVar1 = &LAB_ram_4ff35bb2;
    pcVar6 = (code *)&LAB_ram_4ff35e18;
    puVar5 = &LAB_ram_4ff357cc;
    pcVar2 = FUN_ram_4ff3562a;
    puVar3 = &LAB_ram_4ff361be;
    uVar4 = param_1 - 0x10;
  }
  else {
    puVar1 = &LAB_ram_4ff355c6;
    pcVar6 = FUN_ram_4ff35d68;
    puVar5 = &LAB_ram_4ff354d6;
    pcVar2 = (code *)&LAB_ram_4ff36222;
    puVar3 = &LAB_ram_4ff36204;
    param_2 = 2;
    uVar4 = param_1;
  }
  param_3[1] = uVar4;
  *param_3 = param_1;
  param_3[0xc] = param_4;
  param_3[0xd] = param_4 + param_1;
  param_3[0xb] = param_4;
  param_3[10] = param_4;
  param_3[9] = param_4;
  param_3[8] = param_4;
  param_3[2] = param_2;
  param_3[3] = (uint)puVar1;
  param_3[4] = (uint)pcVar6;
  param_3[5] = (uint)puVar5;
  param_3[6] = (uint)pcVar2;
  param_3[7] = (uint)puVar3;
  param_3[0xe] = 0;
  FUN_ram_4ff3fade(param_3 + 0xf);
  FUN_ram_4ff3fade(param_3 + 0x14);
  param_3[0x19] = 0;
  param_3[0x1b] = 0;
  param_3[0x1a] = 0xb33fffff;
  return;
}


