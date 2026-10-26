/* Firmware entry: 0x4813380a */

undefined4 FUN_ram_4813380a(int *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    uVar2 = FUN_ram_4ff21a0a();
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ec14(&DAT_ram_4ff47f68,0xffffffff);
    uVar1 = 0x103;
    if (*param_1 == 0 && param_1[1] == 0) {
      *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xfe;
      *(undefined8 *)param_1 = uVar2;
      param_1[2] = 0;
      param_1[3] = param_1[3] & 0xff000000;
      param_1[4] = -0xf21e1e2;
      FUN_ram_4ff2d312(param_1,0);
      uVar1 = 0;
    }
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(&DAT_ram_4ff47f68);
    return uVar1;
  }
  return 0x102;
}


