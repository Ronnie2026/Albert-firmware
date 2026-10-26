/* Firmware entry: 0x4805d240 */

void FUN_ram_4805d240(int param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = *(undefined4 **)(param_1 + 0x9d0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar6 = puVar1 + 0x12b0;
    do {
      if ((((((puVar1[6] ^ *(uint *)(param_2 + 0x18)) & 0xffff) == 0) &&
           (puVar1[8] == *(int *)(param_2 + 0x20))) && (puVar1[9] == *(int *)(param_2 + 0x24))) &&
         (puVar1[1] == 0)) {
        FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
        uVar7 = (uint)*(byte *)((int)puVar1 + 0xf);
        if ((param_2[0x14] != '\0') && (*(int *)(param_2 + 8) != 0)) {
          iVar8 = uVar7 * 0x48 + param_1;
          *(int *)(iVar8 + 0xbfc) = *(int *)(iVar8 + 0xbfc) + 1;
          uVar2 = FUN_ram_48025b94();
          *(undefined4 *)(iVar8 + 0xc18) = uVar2;
          *(undefined4 *)(iVar8 + 0xc1c) = 0;
          *(undefined1 *)(iVar8 + 0xc24) = 0;
          puVar1[1] = *(undefined4 *)(param_2 + 8);
          puVar6 = puVar1 + (uint)*(byte *)(puVar1 + 10) * 4;
          if (*(byte *)(puVar1 + 10) != 0) {
            do {
              iVar8 = (uint)*(byte *)(puVar1 + 0xc) * 0x28 + param_1;
              if ((((uint)*(byte *)(iVar8 + 0x9d8) == (uint)*(byte *)(puVar1 + 0xc)) &&
                  (*(int *)(iVar8 + 0x9e0) == puVar1[0xe])) &&
                 (*(int *)(iVar8 + 0x9e4) == puVar1[0xf])) {
                *(undefined1 *)(iVar8 + 0x9fc) = 1;
              }
              puVar1 = puVar1 + 4;
            } while (puVar1 != puVar6);
          }
          goto LAB_ram_4805d458;
        }
        if ((byte)(*param_2 - 1U) < 2) {
          iVar8 = uVar7 * 0x48 + param_1;
          *(int *)(iVar8 + 0xbf0) = *(int *)(iVar8 + 0xbf0) + 1;
        }
        else if (param_2[0xc] == '\t') {
          iVar8 = uVar7 * 0x48 + param_1;
          *(int *)(iVar8 + 0xbf4) = *(int *)(iVar8 + 0xbf4) + 1;
        }
        else {
          iVar8 = uVar7 * 0x48 + param_1;
          *(int *)(iVar8 + 0xbf8) = *(int *)(iVar8 + 0xbf8) + 1;
        }
        pbVar3 = (byte *)(puVar1 + 0xc);
        bVar5 = 0;
        if (*(char *)(puVar1 + 10) != '\0') goto LAB_ram_4805d3b0;
        goto LAB_ram_4805d434;
      }
      puVar1 = puVar1 + 0x1a;
    } while (puVar6 != puVar1);
  }
  return;
LAB_ram_4805d3b0:
  uVar7 = (uint)*pbVar3;
  iVar4 = *(int *)(pbVar3 + 8);
  iVar8 = *(int *)(pbVar3 + 0xc);
  if (((((uVar7 < 8) && (iVar4 != 0 || iVar8 != 0)) &&
       (iVar9 = uVar7 * 0x120 + param_1, *(char *)(iVar9 + 0x70d6) != '\0')) &&
      ((*(int *)(iVar9 + 0x70c8) == iVar4 && (*(int *)(iVar9 + 0x70cc) == iVar8)))) &&
     (*(short *)(iVar9 + 0x70d4) != 0)) {
    *(short *)(iVar9 + 0x70d4) = *(short *)(iVar9 + 0x70d4) + -1;
  }
  iVar9 = uVar7 * 0x28 + param_1;
  if (((*(byte *)(iVar9 + 0x9d8) != uVar7) || (*(int *)(iVar9 + 0x9e0) != iVar4)) ||
     ((*(int *)(iVar9 + 0x9e4) != iVar8 || (*(short *)(iVar9 + 0x9f8) == 0)))) {
    bVar5 = bVar5 + 1;
    pbVar3 = pbVar3 + 0x10;
    if (*(byte *)(puVar1 + 10) <= bVar5) goto LAB_ram_4805d434;
    goto LAB_ram_4805d3b0;
  }
  *(short *)(iVar9 + 0x9f8) = *(short *)(iVar9 + 0x9f8) + -1;
  bVar5 = bVar5 + 1;
  pbVar3 = pbVar3 + 0x10;
  if (*(byte *)(puVar1 + 10) <= bVar5) {
LAB_ram_4805d434:
    puVar1[1] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)(puVar1 + 0x18) = 0;
    puVar1[0x19] = 0;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 6) = 0xff00;
LAB_ram_4805d458:
    FUN_ram_4ff3ee10(param_1 + 0xb20);
    return;
  }
  goto LAB_ram_4805d3b0;
}


