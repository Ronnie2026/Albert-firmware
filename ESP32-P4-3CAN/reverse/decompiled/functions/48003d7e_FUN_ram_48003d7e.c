/* Firmware entry: 0x48003d7e */

void FUN_ram_48003d7e(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int iStack_90;
  int iStack_8c;
  int *piStack_88;
  int *piStack_84;
  int local_80 [19];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x3f < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sleep_retention.c",0x1f2,"sleep_retention_entries_do_destroy",
                     "SLEEP_RETENTION_MODULE_MIN <= module && module <= SLEEP_RETENTION_MODULE_MAX")
    ;
  }
  FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
  FUN_ram_48003bbc();
  FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
  if (DAT_ram_4ff4be00 < 8) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      FUN_ram_48005624((&DAT_ram_4ff4bd3c)[DAT_ram_4ff4be00 * 6 + iVar2],iVar2);
      iVar2 = iVar3;
    } while (iVar3 != 4);
  }
  FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
  local_80[0] = 0;
  local_80[4] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
  iStack_90 = 0;
  iStack_8c = 0;
  do {
    local_80[0xc] = 0;
    local_80[0xd] = 0;
    local_80[0xe] = 0;
    local_80[0xf] = 0;
    local_80[8] = 0;
    local_80[9] = 0;
    local_80[10] = 0;
    local_80[0xb] = 0;
    FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
    piVar12 = local_80 + 4;
    iVar3 = iStack_8c + iStack_90;
    bVar1 = false;
    piStack_88 = &DAT_ram_4ff4bd3c + iVar3 * 2;
    piStack_84 = local_80;
    iVar2 = 0;
    piVar4 = piStack_88;
    piVar11 = piStack_84;
    piVar13 = local_80 + 8;
    do {
      iVar5 = FUN_ram_48005a0c(*piVar4,(&DAT_ram_4ff4bd50)[iVar3 * 2],iVar2,param_1);
      uVar10 = (&DAT_ram_4ff4bd50)[iVar3 * 2];
      iVar6 = *piVar4;
      *piVar11 = iVar5;
      iVar6 = FUN_ram_48005a88(iVar6,uVar10,iVar2,param_1);
      uVar10 = (&DAT_ram_4ff4bd50)[iVar3 * 2];
      iVar7 = *piVar4;
      *piVar13 = iVar6;
      iVar7 = FUN_ram_48005b32(iVar7,uVar10,iVar2,param_1);
      uVar10 = (&DAT_ram_4ff4bd50)[iVar3 * 2];
      iVar8 = *piVar4;
      *piVar12 = iVar7;
      iVar7 = FUN_ram_48005b8a(iVar8,uVar10,iVar2,param_1);
      (local_80 + 0xc)[iVar2] = iVar7;
      if (iVar5 != 0) {
        bVar1 = (bool)(bVar1 | iVar6 != 0);
      }
      if (iVar6 != local_80[8]) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("sleep_retention.c",400,"sleep_retention_entries_get_destroy_context",
                         "destroy_tails[entry] == destroy_tails[0]");
      }
      if (iVar7 != local_80[0xc]) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("sleep_retention.c",0x191,"sleep_retention_entries_get_destroy_context",
                         "prev_tails[entry] == prev_tails[0]");
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
      piVar11 = piVar11 + 1;
      piVar13 = piVar13 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar2 != 4);
    FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
    if ((((&DAT_ram_4ff4bd4c)[(iStack_8c + iStack_90) * 2] & 0xf) == 0) || (!bVar1)) {
      iStack_90 = iStack_90 + 1;
      if (iStack_90 == 8) {
        (&DAT_ram_4ff4bd3c)[(param_1 >> 5) + 0x34] =
             ~(1 << (param_1 & 0x1f)) & (&DAT_ram_4ff4bd3c)[(param_1 >> 5) + 0x34];
        FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
        FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
        return;
      }
      iStack_8c = iStack_90 * 2;
    }
    else {
      FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
      if ((((local_80[0] == *piStack_88) && (local_80[1] == (&DAT_ram_4ff4bd40)[iVar3 * 2])) &&
          (local_80[2] == (&DAT_ram_4ff4bd44)[iVar3 * 2])) &&
         (local_80[3] == (&DAT_ram_4ff4bd48)[iVar3 * 2])) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      iVar5 = iStack_8c + iStack_90;
      iVar2 = (&DAT_ram_4ff4bd50)[iVar5 * 2];
      if (bVar1) {
        if (iVar6 == iVar2) {
          (&DAT_ram_4ff4bd50)[iVar5 * 2] = iVar7;
        }
        else {
          FUN_ram_480058ac(iVar7,4,local_80[4],local_80[5],local_80[6],local_80[7]);
        }
      }
      else if (iVar6 == iVar2) {
        *piStack_88 = 0;
        (&DAT_ram_4ff4bd40)[iVar3 * 2] = 0;
        (&DAT_ram_4ff4bd44)[iVar3 * 2] = 0;
        (&DAT_ram_4ff4bd48)[iVar3 * 2] = 0;
        (&DAT_ram_4ff4bd50)[iVar5 * 2] = 0;
      }
      else {
        *piStack_88 = local_80[4];
        (&DAT_ram_4ff4bd40)[iVar3 * 2] = local_80[5];
        (&DAT_ram_4ff4bd44)[iVar3 * 2] = local_80[6];
        (&DAT_ram_4ff4bd48)[iVar3 * 2] = local_80[7];
      }
      FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
      uVar14 = 0;
      local_80[0xc] = (&DAT_ram_4ff4bd50)[(iStack_8c + iStack_90) * 2];
      local_80[0xd] = local_80[0xc];
      local_80[0xe] = local_80[0xc];
      local_80[0xf] = local_80[0xc];
      FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
      piVar4 = piStack_88;
      iVar3 = 0;
      piVar11 = local_80 + 0xc;
      do {
        iVar5 = iVar3 + 1;
        uVar9 = FUN_ram_480059a0(*piVar4,*piVar11,iVar3);
        piVar4 = piVar4 + 1;
        piVar11 = piVar11 + 1;
        uVar14 = uVar14 | uVar9;
        iVar3 = iVar5;
      } while (iVar5 != 4);
      FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
      uVar9 = 0;
      (&DAT_ram_4ff4bd4c)[(iStack_8c + iStack_90) * 2] =
           (&DAT_ram_4ff4bd4c)[(iStack_8c + iStack_90) * 2] & 0xfffffff0 | uVar14 & 0xf;
      FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
      iVar3 = 0;
      do {
        iVar5 = iVar3 + 1;
        uVar14 = FUN_ram_480059a0(*piStack_88,*piStack_88,iVar3);
        piStack_88 = piStack_88 + 1;
        uVar9 = uVar9 | uVar14;
        iVar3 = iVar5;
      } while (iVar5 != 4);
      FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
      (&DAT_ram_4ff4bd4c)[(iStack_8c + iStack_90) * 2] =
           (&DAT_ram_4ff4bd4c)[(iStack_8c + iStack_90) * 2] & 0xffffff0f | (uVar9 & 0xf) << 4;
      FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
      FUN_ram_480058ac(iVar6,4,0,0,0,0);
      FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
      if (((bool)(bVar1 ^ 1)) || (iVar6 == iVar2)) {
        FUN_ram_48003bbc();
      }
      iVar2 = 0;
      do {
        iVar3 = iVar2 + 1;
        FUN_ram_480056b6(*piStack_84,iVar2);
        piStack_84 = piStack_84 + 1;
        iVar2 = iVar3;
      } while (iVar3 != 4);
    }
  } while( true );
}


