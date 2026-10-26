/* Firmware entry: 0x48075c1a */

undefined4 FUN_ram_48075c1a(char *param_1,undefined4 param_2)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte local_20 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  pbVar8 = local_20;
  sVar2 = strlen(param_1);
  if (sVar2 == 0x20) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
    local_20[4] = 0;
    local_20[5] = 0;
    local_20[6] = 0;
    local_20[7] = 0;
    local_20[8] = 0;
    local_20[9] = 0;
    local_20[10] = 0;
    local_20[0xb] = 0;
    local_20[0xc] = 0;
    local_20[0xd] = 0;
    local_20[0xe] = 0;
    local_20[0xf] = 0;
    uVar6 = 0;
    do {
      uVar4 = (uint)(byte)param_1[uVar6];
      uVar7 = uVar4 - 0x30;
      if (9 < (uVar7 & 0xff)) {
        if ((uVar4 - 0x61 & 0xff) < 6) {
          uVar7 = uVar4 - 0x57;
        }
        else {
          if (5 < (uVar4 - 0x41 & 0xff)) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0;
          }
          uVar7 = uVar4 - 0x37;
        }
      }
      uVar4 = uVar6 >> 1;
      uVar3 = ~uVar6;
      uVar6 = uVar6 + 1;
      local_20[uVar4] = (byte)(uVar7 << ((uVar3 & 1) << 2)) | local_20[uVar4];
    } while (uVar6 != 0x20);
    bVar5 = 0;
    do {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      bVar5 = bVar5 | bVar1;
    } while (local_20 + 0x10 != pbVar8);
    if (bVar5 != 0) {
      FUN_ram_4ff45158(param_2,local_20,0x10);
      return 1;
    }
  }
  return 0;
}


