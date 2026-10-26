/* Firmware entry: 0x4805883a */

undefined4 * FUN_ram_4805883a(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_2 + 0xb18,0xffffffff);
  puVar5 = (undefined4 *)(param_2 + 0xb38);
  puVar4 = param_1;
  do {
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    puVar5 = puVar5 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar5 != (undefined4 *)(param_2 + 0xbd8));
  *puVar4 = *puVar5;
  FUN_ram_4ff3ee10(param_2 + 0xb18);
  return param_1;
}


