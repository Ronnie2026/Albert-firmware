/* Firmware entry: 0x4800639a */

void FUN_ram_4800639a(void *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0xf0);
  uVar4 = DAT_ram_4ff4bb34;
  uVar3 = DAT_ram_4ff4bb24;
  puVar2 = PTR_DAT_ram_4ff6d724_ram_4ff4bb18;
  puVar1 = PTR_DAT_ram_4ff6d6bc_ram_4ff4bb14;
  *(undefined **)((int)param_1 + 4) = PTR_DAT_ram_4ff6d654_ram_4ff4bb10;
  *(undefined **)((int)param_1 + 8) = puVar1;
  *(undefined **)((int)param_1 + 0xc) = puVar2;
  *(undefined4 *)((int)param_1 + 0x28) = uVar4;
  *(undefined4 *)((int)param_1 + 0x18) = uVar3;
  return;
}


