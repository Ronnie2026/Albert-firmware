/* Firmware entry: 0x4818aa8c */

int FUN_ram_4818aa8c(uint *param_1,byte *param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  int local_58 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar3 = (byte *)*param_1;
  puVar1 = param_3;
  if (pbVar3 < param_2) {
    puVar4 = param_3;
    do {
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      local_58[6] = 0;
      local_58[7] = 0;
      local_58[8] = 0;
      local_58[9] = 0;
      uStack_64 = (uint)*pbVar3;
      *param_1 = (uint)(pbVar3 + 1);
      iVar2 = FUN_ram_4817f2d4(param_1,param_2,&uStack_68);
      if (iVar2 != 0) {
        return iVar2 + -0x2500;
      }
      uStack_5c = *param_1;
      uStack_60 = uStack_68;
      if ((uStack_64 & 0xc0) != 0x80) {
        return -0x2562;
      }
      iVar2 = FUN_ram_4818a7d8(&uStack_64,local_58);
      if ((iVar2 != 0) && (iVar2 != -0x2080)) {
        FUN_ram_4817f88a(param_3[3]);
        param_3[3] = 0;
        return iVar2;
      }
      if (local_58[0] == 4) {
        FUN_ram_4817fa3c(local_58[7]);
      }
      puVar1 = puVar4;
      if (puVar4[2] != 0) {
        if (puVar4[3] != 0) {
          return -0x2500;
        }
        puVar1 = (uint *)thunk_FUN_ram_4817b126(1,0x10);
        puVar4[3] = (uint)puVar1;
        if (puVar1 == (uint *)0x0) {
          return -0x256a;
        }
      }
      puVar1[1] = uStack_60;
      puVar1[2] = uStack_5c;
      *puVar1 = uStack_64;
      pbVar3 = (byte *)(*param_1 + uStack_60);
      *param_1 = (uint)pbVar3;
      puVar4 = puVar1;
    } while (pbVar3 < param_2);
  }
  puVar1[3] = 0;
  if (param_2 != pbVar3) {
    return -0x2566;
  }
  return 0;
}


