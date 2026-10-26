/* Firmware entry: 0x4807db36 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4807db36(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  bool bVar17;
  uint local_b4;
  undefined1 uStack_b0;
  byte bStack_af;
  byte bStack_ae;
  char cStack_ad;
  uint auStack_ac [7];
  char cStack_8e;
  char local_8d [40];
  char cStack_65;
  char local_64 [64];
  char acStack_24 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((*param_1 == 0x4d) && (param_1[1] == 0x47)) && (param_1[2] == 0x4c)) &&
      ((param_1[3] == 0x31 && (bVar1 = param_1[8], bVar1 < 2)))) &&
     ((bVar2 = param_1[9], bVar2 < 2 && ((bVar3 = param_1[10], bVar3 < 3 && (param_1[0xb] == 0))))))
  {
    uVar13 = 0xffffffff;
    pbVar10 = param_1;
    do {
      iVar12 = 8;
      uVar13 = uVar13 ^ *pbVar10;
      do {
        iVar12 = iVar12 + -1;
        uVar13 = uVar13 >> 1 ^ -(uVar13 & 1) & 0xedb88320;
      } while (iVar12 != 0);
      pbVar10 = pbVar10 + 1;
    } while (param_1 + 0xbc != pbVar10);
    if (((uint)param_1[0xbf] << 0x18 |
        (uint)param_1[0xbd] << 8 | (uint)param_1[0xbe] << 0x10 | (uint)param_1[0xbc]) == ~uVar13) {
      pbVar10 = param_1 + 0x96;
      do {
        bVar4 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (bVar4 != 0) {
          return 0;
        }
      } while (param_1 + 0xbc != pbVar10);
      puVar15 = &DAT_ram_48223900;
      puVar14 = &local_b4;
      do {
        uVar13 = puVar15[1];
        uVar9 = puVar15[2];
        uVar11 = puVar15[3];
        *puVar14 = *puVar15;
        puVar14[1] = uVar13;
        puVar14[2] = uVar9;
        puVar14[3] = uVar11;
        puVar15 = puVar15 + 4;
        puVar14 = puVar14 + 4;
      } while (puVar15 != (uint *)&DAT_ram_48223990);
      bVar4 = param_1[6];
      bVar5 = param_1[5];
      bVar6 = param_1[4];
      bVar7 = param_1[7];
      *puVar14 = _DAT_ram_48223990;
      bVar17 = (bool)(bVar1 & 1);
      uVar13 = (uint)bVar7 << 0x18 | (uint)bVar4 << 0x10 | (uint)bVar5 << 8 | (uint)bVar6;
      bStack_af = bVar2 & 1;
      local_b4 = uVar13;
      uStack_b0 = bVar17;
      bStack_ae = bVar3;
      FUN_ram_4ff45158(&cStack_ad,param_1 + 0xc,0x20);
      FUN_ram_4ff45158(local_8d,param_1 + 0x2c,0x29);
      FUN_ram_4ff45158(local_64,param_1 + 0x55,0x41);
      if ((uVar13 != 0) && ((bVar3 != 0) == bVar17)) {
        if (bVar3 == 1) {
          if ((cStack_ad == 'P') && (cStack_8e == '\0')) {
            pcVar16 = local_8d;
            do {
              cVar8 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              if ((9 < (byte)(cVar8 - 0x30U)) && (5 < (byte)(cVar8 + 0x9fU))) {
                return 0;
              }
            } while (pcVar16 != &cStack_65);
            if (cStack_65 == '\0') {
              pcVar16 = local_64;
              do {
                cVar8 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                if ((9 < (byte)(cVar8 - 0x30U)) && (5 < (byte)(cVar8 + 0x9fU))) {
                  return 0;
                }
              } while (pcVar16 != acStack_24);
              if (acStack_24[0] == '\0') goto LAB_ram_4807dcda;
            }
          }
        }
        else if ((cStack_ad == '\0' && local_8d[0] == '\0') && local_64[0] == '\0') {
LAB_ram_4807dcda:
          FUN_ram_4ff45158(param_3,&local_b4,0x91);
          return 1;
        }
      }
    }
  }
  return 0;
}


