/* Firmware entry: 0x48058d6c */

undefined4 FUN_ram_48058d6c(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  uint auStack_298 [24];
  undefined1 auStack_238 [4];
  uint auStack_234 [25];
  uint auStack_1d0 [25];
  uint auStack_16c [24];
  undefined1 auStack_10c [4];
  uint auStack_108 [25];
  uint auStack_a4 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0xc) {
    return 1;
  }
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  cVar1 = *(char *)(param_1 + 0xb39);
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  if (cVar1 != '\f') {
    FUN_ram_48051e92(auStack_298,0xc);
    FUN_ram_4ff3ec14(param_1 + 0xb30,0xffffffff);
    puVar10 = (uint *)(param_1 + 0x9520);
    puVar8 = auStack_16c;
    do {
      uVar11 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      uVar7 = puVar10[4];
      *puVar8 = *puVar10;
      puVar8[1] = uVar11;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      puVar8[4] = uVar7;
      puVar10 = puVar10 + 5;
      puVar8 = puVar8 + 5;
    } while (puVar10 != (uint *)(param_1 + 0x964c));
    pcVar12 = &DAT_ram_4ff47e48;
    FUN_ram_4ff3ee10(param_1 + 0xb30);
    do {
      cVar1 = *pcVar12;
      if (cVar1 == '\x01') {
        puVar8 = auStack_16c;
LAB_ram_48058e9e:
        if ((byte)puVar8[0x18] != 0) {
          puVar10 = puVar8 + (byte)puVar8[0x18];
          do {
            puVar13 = auStack_298;
            if ((cVar1 != '\x01') && (puVar13 = (uint *)(auStack_238 + 0x68), cVar1 == '\x02')) {
              puVar13 = (uint *)(auStack_238 + 4);
            }
            bVar2 = (byte)puVar13[0x18];
            uVar5 = (uint)bVar2;
            uVar6 = *puVar8 & 0x7ff;
            if (uVar5 == 0) {
              cVar4 = '\x01';
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              puVar9 = puVar13;
              do {
                uVar11 = *puVar9;
                puVar9 = puVar9 + 1;
                if (uVar6 <= uVar11) {
                  if (uVar7 < uVar5) {
                    if (uVar6 == puVar13[uVar7]) goto LAB_ram_48058f3c;
                    if (0x17 < uVar5) {
                      return 0;
                    }
                    uVar11 = uVar5 - uVar7 & 0xff;
                    iVar3 = -(uVar11 - 1 & 0xff);
                    cVar4 = bVar2 + 1;
                    FUN_ram_4ff4522c(puVar13 + iVar3 + uVar5,puVar13 + (uVar5 - 1) + iVar3,
                                     uVar11 << 2);
                    goto LAB_ram_48058f2e;
                  }
                  break;
                }
                uVar7 = uVar7 + 1 & 0xff;
              } while (uVar5 != uVar7);
              if (0x17 < uVar5) {
                return 0;
              }
              cVar4 = bVar2 + 1;
            }
LAB_ram_48058f2e:
            puVar13[uVar7] = uVar6;
            *(char *)(puVar13 + 0x18) = cVar4;
LAB_ram_48058f3c:
            puVar8 = puVar8 + 1;
          } while (puVar8 != puVar10);
        }
      }
      else {
        if (cVar1 == '\x02') {
          puVar8 = (uint *)(auStack_10c + 4);
          goto LAB_ram_48058e9e;
        }
        if (cVar1 == '\x04') {
          puVar8 = (uint *)(auStack_10c + 0x68);
          goto LAB_ram_48058e9e;
        }
      }
      pcVar12 = pcVar12 + 1;
    } while (pcVar12 != &DAT_ram_4ff47e4b);
  }
  return 1;
}


