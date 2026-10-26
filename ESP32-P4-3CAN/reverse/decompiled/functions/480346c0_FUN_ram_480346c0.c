/* Firmware entry: 0x480346c0 */

undefined2 * FUN_ram_480346c0(undefined2 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  short local_70 [4];
  undefined2 uStack_68;
  undefined2 uStack_66;
  short sStack_64;
  undefined2 uStack_60;
  short local_5e [30];
  short asStack_22 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_66 = *(undefined2 *)(param_2 + 0x4c);
  sVar10 = *(short *)(param_2 + 0x42);
  local_70[1] = *(undefined2 *)(param_2 + 0x44);
  local_70[2] = *(undefined2 *)(param_2 + 0x46);
  local_70[3] = *(undefined2 *)(param_2 + 0x48);
  uStack_68 = *(undefined2 *)(param_2 + 0x4a);
  sVar3 = *(short *)(param_2 + 0x4e);
  sVar4 = *(short *)(param_2 + 0x60);
  bVar1 = *(byte *)(param_2 + 0x9c);
  bVar2 = *(byte *)(param_2 + 0x9d);
  uStack_60 = 0;
  local_70[0] = sVar10;
  sStack_64 = sVar3;
  memset(local_5e,0,0x3c);
  psVar6 = local_5e;
  sVar9 = 5;
  psVar5 = psVar6;
  do {
    *psVar5 = sVar9;
    sVar9 = sVar9 + 5;
    psVar5 = psVar5 + 1;
  } while (psVar5 != asStack_22);
  psVar5 = local_5e;
  uVar7 = 5;
LAB_ram_48034768:
  do {
    for (; uVar7 < 0x32; uVar7 = uVar7 + 5) {
      bVar8 = bVar1;
      if (0x3c < bVar1) {
        bVar8 = 0x3c;
      }
      sVar9 = (short)(((byte)(bVar8 + 100) * uVar7 + 99) / 100);
LAB_ram_48034790:
      *psVar5 = sVar9;
LAB_ram_48034796:
      psVar5 = psVar5 + 1;
    }
    if (uVar7 < 0x3c) {
      *psVar5 = sVar10;
      uVar7 = uVar7 + 5;
      psVar5 = psVar5 + 1;
      goto LAB_ram_48034768;
    }
    if (uVar7 < 0x6e) {
      sVar9 = local_70[uVar7 / 10 - 5];
      goto LAB_ram_48034790;
    }
    if (uVar7 < 0x78) {
      *psVar5 = sVar4;
      uVar7 = uVar7 + 5;
      psVar5 = psVar5 + 1;
    }
    else {
      if (0x8b < uVar7) {
        bVar8 = bVar2;
        if (0x3c < bVar2) {
          bVar8 = 0x3c;
        }
        *psVar5 = (short)(((byte)(bVar8 + 100) * uVar7 + 99) / 100);
        if (uVar7 == 0x96) {
          do {
            sVar10 = *psVar6;
            psVar6 = psVar6 + 1;
            if (0xfe < (ushort)(sVar10 - 1U)) {
              *param_1 = 0;
              psVar5 = memset(param_1 + 1,0,0x3c);
              sVar10 = 5;
              do {
                *psVar5 = sVar10;
                sVar10 = sVar10 + 5;
                psVar5 = psVar5 + 1;
              } while (param_1 + 0x1f != psVar5);
              return param_1;
            }
          } while (psVar6 != asStack_22);
          FUN_ram_4ff45158(param_1,&uStack_60,0x3e);
          return param_1;
        }
        goto LAB_ram_48034796;
      }
      *psVar5 = sVar3;
      uVar7 = uVar7 + 5;
      psVar5 = psVar5 + 1;
    }
  } while( true );
}


