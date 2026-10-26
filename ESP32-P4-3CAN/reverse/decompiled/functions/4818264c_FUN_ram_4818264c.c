/* Firmware entry: 0x4818264c */

int FUN_ram_4818264c(int param_1,byte *param_2,uint param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_44 [4];
  byte local_40 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    iVar7 = param_1 + 0x38;
    do {
      uVar9 = *(uint *)(param_1 + 0x2c) & 0xf;
      uVar8 = 0x10 - uVar9;
      if (param_3 < 0x10 - uVar9) {
        uVar8 = param_3;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + uVar8;
      uVar5 = *(uint *)(param_1 + 0x34) & 0xfffffffd;
      if (uVar5 == 1) {
        pbVar3 = param_2;
        pbVar4 = (byte *)(param_1 + uVar9);
        do {
          bVar1 = *pbVar3;
          pbVar6 = pbVar4 + 1;
          pbVar3 = pbVar3 + 1;
          *pbVar4 = *pbVar4 ^ bVar1;
          pbVar4 = pbVar6;
        } while (pbVar6 != (byte *)(param_1 + uVar9) + uVar8);
        if (((uVar9 + uVar8 == 0x10) || (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x20))) &&
           (iVar10 = FUN_ram_48171b10(iVar7,param_1,0x10,param_1,auStack_44), iVar10 != 0)) {
LAB_ram_48182782:
          *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x10;
        }
        else {
          iVar10 = FUN_ram_481825ba(param_1,uVar9,uVar8,param_2,param_4);
          if (iVar10 == 0) {
            if ((*(uint *)(param_1 + 0x34) & 0xfffffffd) != 0) goto LAB_ram_48182698;
            goto LAB_ram_48182722;
          }
        }
        goto LAB_ram_481826c8;
      }
      if (uVar5 == 0) {
LAB_ram_48182722:
        iVar10 = FUN_ram_481825ba(param_1,uVar9,uVar8,param_2,local_40);
        if (iVar10 == 0) {
          pbVar4 = local_40;
          pbVar3 = (byte *)(param_1 + uVar9);
          do {
            bVar1 = *pbVar4;
            pbVar6 = pbVar3 + 1;
            pbVar4 = pbVar4 + 1;
            *pbVar3 = *pbVar3 ^ bVar1;
            pbVar3 = pbVar6;
          } while ((byte *)(param_1 + uVar9) + uVar8 != pbVar6);
          FUN_ram_4ff45158(param_4,local_40,uVar8);
          if (uVar9 + uVar8 == 0x10) {
            iVar10 = FUN_ram_48171b10(iVar7,param_1,0x10,param_1,auStack_44);
            if (iVar10 == 0) goto LAB_ram_481827b2;
          }
          else {
            if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x20)) goto LAB_ram_481826a6;
            iVar10 = FUN_ram_48171b10(iVar7,param_1,0x10,param_1,auStack_44);
            if (iVar10 == 0) goto LAB_ram_4818269e;
          }
          goto LAB_ram_48182782;
        }
        goto LAB_ram_481826c8;
      }
LAB_ram_48182698:
      if (uVar9 + uVar8 == 0x10) {
LAB_ram_481827b2:
        uVar9 = *(uint *)(param_1 + 0x30);
        uVar5 = 0;
        if (uVar9 != 0) {
          do {
            iVar10 = (0xf - uVar5) + param_1;
            cVar2 = *(char *)(iVar10 + 0x10);
            uVar5 = uVar5 + 1 & 0xff;
            *(char *)(iVar10 + 0x10) = cVar2 + '\x01';
            if (cVar2 != -1) break;
          } while (uVar5 < uVar9);
        }
      }
      else {
LAB_ram_4818269e:
        if (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x20)) goto LAB_ram_481827b2;
      }
LAB_ram_481826a6:
      param_3 = param_3 - uVar8;
      param_2 = param_2 + uVar8;
      param_4 = param_4 + uVar8;
    } while (param_3 != 0);
  }
  iVar10 = 0;
LAB_ram_481826c8:
  FUN_ram_48178af2(local_40,0x10);
  return iVar10;
}


