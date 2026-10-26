/* Firmware entry: 0x4802d92a */

undefined2 * FUN_ram_4802d92a(undefined2 *param_1,uint *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint *puVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  uint uStack_64;
  char cStack_4a;
  char local_49;
  ushort uStack_48;
  ushort local_46;
  ushort local_44;
  ushort local_42 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 1;
  uVar12 = 0;
  uVar2 = 0;
  uVar3 = 0;
  if (param_2 != (uint *)0x0) {
    uVar17 = *param_2;
    uVar5 = 0;
    if (param_3 == 1) {
      uVar15 = 0x7ff;
      uStack_64 = 1;
    }
    else {
      puVar10 = param_2 + 1;
      uVar15 = 0x7ff;
      do {
        uVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar15 = uVar15 & ~(((ushort)uVar17 ^ uVar13) & 0x7ff);
      } while (param_2 + (param_3 - 2U & 0xff) + 2 != puVar10);
      iVar6 = __popcountsi2(uVar15);
      uStack_64 = 1 << (0xbU - iVar6 & 0x1f);
    }
    param_1[1] = (ushort)uVar17 & (ushort)uVar15;
    *(undefined1 *)param_1 = 0;
    param_1[2] = (ushort)uVar15;
    uVar17 = 0;
    cVar4 = '\0';
    do {
      cStack_4a = '\0';
      local_49 = '\0';
      uStack_48 = 0;
      local_46 = 0;
      local_44 = 0x7ff;
      local_42[0] = 0x7ff;
      puVar10 = param_2;
      do {
        puVar8 = &uStack_48;
        puVar9 = &local_44;
        if ((*puVar10 & 0x7ff & 1 << (uVar17 & 0x1f)) == 0) {
          pcVar14 = &cStack_4a;
          cVar1 = cStack_4a;
        }
        else {
          puVar8 = &local_46;
          pcVar14 = &local_49;
          puVar9 = local_42;
          cVar1 = local_49;
        }
        uVar11 = (ushort)(*puVar10 & 0x7ff);
        if (cVar1 == '\0') {
          *pcVar14 = '\x01';
          *puVar8 = uVar11;
        }
        else {
          *puVar9 = ~(uVar11 ^ *puVar8) & *puVar9;
        }
        uVar11 = local_42[0];
        cVar1 = local_49;
        puVar10 = puVar10 + 1;
      } while (puVar10 != param_2 + param_3);
      if ((cStack_4a != '\0') && (local_49 != '\0')) {
        uVar16 = local_44 & 0x7ff;
        iVar6 = __popcountsi2(uVar16);
        uVar11 = uVar11 & 0x7ff;
        iVar7 = __popcountsi2(uVar11);
        uVar13 = (1 << (0xbU - iVar6 & 0x1f)) + (1 << (0xbU - iVar7 & 0x1f));
        if (uVar13 < uStack_64) {
          uVar12 = uVar16 & uStack_48;
          uVar5 = uVar11 & local_46;
          uStack_64 = uVar13;
          uVar2 = uVar16;
          uVar3 = uVar11;
          cVar4 = cVar1;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0xb);
    if (cVar4 == '\0') {
      if (uVar15 == 0) {
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        *param_1 = 1;
      }
    }
    else {
      param_1[3] = uVar5;
      param_1[4] = uVar3;
      *(undefined1 *)((int)param_1 + 1) = 1;
      param_1[2] = uVar2;
      param_1[1] = uVar12;
    }
  }
  return param_1;
}


