/* Firmware entry: 0x480dce8c */

void FUN_ram_480dce8c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = param_1 + 0x33c0;
  iVar2 = param_1 + 0x2880;
  FUN_ram_4ff3ec14(iVar3,0xffffffff);
  do {
    if ((param_2 == *(int *)(iVar2 + 0x74)) && (cVar4 = *(char *)(iVar2 + 0xe8), cVar4 != '\0')) {
      if ((byte)(cVar4 - 1U) < 2) {
        FUN_ram_48047a40(param_1 + 0x2878,iVar2,0xc,2);
        FUN_ram_4ff3ee10(iVar3);
        goto LAB_ram_480dcf68;
      }
      if (cVar4 == '\x03') {
        puVar10 = *(undefined4 **)(param_1 + 0x33c8);
        puVar8 = puVar10 + 0x297;
        *(undefined1 *)(iVar2 + 0xe9) = 1;
        *(undefined1 *)(iVar2 + 0x8e) = 0;
        FUN_ram_4ff3ec14(puVar8,0xffffffff);
        piVar9 = (int *)*puVar10;
        FUN_ram_4ff3ee10(puVar8);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0xa8))(piVar9,iVar2 + 0x70);
        }
        FUN_ram_4ff3ee10(iVar3);
        goto LAB_ram_480dcf68;
      }
      break;
    }
    iVar2 = iVar2 + 0xf0;
  } while (iVar3 != iVar2);
  FUN_ram_4ff3ee10(iVar3);
  if (param_2 == 0) {
LAB_ram_480dcf68:
    FUN_ram_480dcc76(param_1 + 0x2870);
    FUN_ram_480dcdda(param_1,1);
    FUN_ram_480dcdda(param_1,2);
    FUN_ram_480dcdda(param_1,4);
    return;
  }
  cVar4 = '\x01';
  cVar1 = '\0';
  do {
    iVar2 = param_1 + 0x5ef0;
    iVar3 = 0;
    uVar5 = 0;
    do {
      while( true ) {
        iVar6 = 1;
        if (cVar4 != '\x02') {
          iVar6 = (uint)(cVar4 == '\x04') << 1;
        }
        if (0xf < (uVar5 & 0xff)) break;
        iVar6 = iVar6 * 0x1228 + iVar3 + param_1 + 0x3a40;
        if ((*(char *)(iVar6 + 0xe6) == '\x01') && (param_2 == *(int *)(iVar6 + 0x40))) {
LAB_ram_480dcfbc:
          iVar2 = 1;
          if (cVar4 != '\x02') {
            iVar2 = (uint)(cVar4 == '\x04') << 1;
          }
          iVar7 = *(int *)(iVar6 + 0xd8);
          iVar3 = *(int *)(iVar6 + 0xdc);
          if ((uVar5 & 0xff) < 0x10) {
            if (iVar7 == 0 && iVar3 == 0) goto LAB_ram_480dcf68;
            iVar2 = iVar2 * 0x1228 + (uVar5 & 0xff) * 0xe8;
          }
          else {
            iVar2 = (uVar5 - 0x10) * 0x120;
            iVar6 = param_1 + iVar2;
            if (((*(char *)(iVar6 + 0x70d6) == '\0') || (*(char *)(iVar6 + 0x70b8) != cVar4)) ||
               (iVar7 == 0 && iVar3 == 0)) goto LAB_ram_480dcf68;
            iVar2 = iVar2 + 14000;
          }
          iVar2 = iVar2 + param_1 + 0x3a40;
          if (((*(int *)(iVar2 + 0xd8) == iVar7) && (*(int *)(iVar2 + 0xdc) == iVar3)) &&
             (*(char *)(iVar2 + 0xe6) == '\x01')) {
            FUN_ram_4804691a();
          }
          goto LAB_ram_480dcf68;
        }
        uVar5 = uVar5 + 1;
        iVar2 = iVar2 + 0x120;
        iVar3 = iVar3 + 0xe8;
      }
      if ((((*(char *)(iVar2 + -0x1a) != '\0') && (*(char *)(iVar2 + -0x38) == cVar4)) &&
          (*(char *)(iVar2 + 0xe6) == '\x01')) && (iVar6 = iVar2, param_2 == *(int *)(iVar2 + 0x40))
         ) goto LAB_ram_480dcfbc;
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0x120;
      iVar3 = iVar3 + 0xe8;
    } while (uVar5 != 0x18);
    cVar1 = cVar1 + '\x01';
    if (cVar1 == '\x03') goto LAB_ram_480dcf68;
    cVar4 = '\x02';
    if (cVar1 != '\x01') {
      cVar4 = '\x04';
    }
  } while( true );
}


