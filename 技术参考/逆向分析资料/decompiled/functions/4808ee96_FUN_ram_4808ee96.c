/* Firmware entry: 0x4808ee96 */

undefined1 FUN_ram_4808ee96(char *param_1)

{
  char **ppcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char *local_50;
  char *local_4c [3];
  char *apcStack_40 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 != '\0') {
    return 1;
  }
  local_50 = "fsd_records4";
  local_4c[0] = "fsd_records3";
  local_4c[1] = "fsd_records2";
  local_4c[2] = "fsd_records";
  ppcVar1 = &local_50;
  pcVar5 = "fsd_records4";
LAB_ram_4808efb2:
  pcVar3 = "p4_data";
  cVar6 = DAT_ram_4ff47e6c;
  if (DAT_ram_4ff47e6c == '\0') {
    pcVar3 = "nvs";
  }
  do {
    iVar2 = FUN_ram_48159fd2(pcVar3,pcVar5,0,&uStack_5c);
    if (iVar2 != 0x1102) {
      if (iVar2 != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      uStack_58 = 0;
      uStack_54 = 0;
      iVar2 = FUN_ram_4815a556(uStack_5c,"slot0",0,&uStack_58);
      iVar4 = FUN_ram_4815a556(uStack_5c,"slot1",0,&uStack_54);
      FUN_ram_4815a050(uStack_5c);
      if (iVar2 == 0) {
        if ((iVar4 != 0) && (iVar4 != 0x1102)) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0;
        }
LAB_ram_4808ef5c:
        *(char **)(param_1 + 4) = pcVar5;
        param_1[8] = cVar6;
        *param_1 = '\x01';
        return 1;
      }
      if (iVar2 != 0x1102) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      if (iVar4 == 0) goto LAB_ram_4808ef5c;
      if (iVar4 != 0x1102) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
    }
    ppcVar1 = ppcVar1 + 1;
    if (ppcVar1 == apcStack_40) {
      *param_1 = '\x01';
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
    iVar2 = FUN_ram_4ff453ae(*ppcVar1,"fsd_records4");
    pcVar5 = *ppcVar1;
    if ((iVar2 == 0) || (iVar2 = FUN_ram_4ff453ae(pcVar5,"fsd_records3"), iVar2 == 0))
    goto LAB_ram_4808efb2;
    pcVar3 = "nvs";
    cVar6 = '\0';
  } while( true );
}


