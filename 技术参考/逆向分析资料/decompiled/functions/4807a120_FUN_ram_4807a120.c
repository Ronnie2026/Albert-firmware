/* Firmware entry: 0x4807a120 */

void FUN_ram_4807a120(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uStack_4c8;
  undefined1 auStack_4c4 [1204];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_4c4,0,0x4b3);
  uStack_4c8 = 0;
  if ((char)param_1[3] == '\0') {
    iVar2 = FUN_ram_480713be(param_2,0,auStack_4c4);
    if (iVar2 == 0) goto LAB_ram_4807a188;
    cVar3 = (char)param_1[3];
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar4 = param_1[1];
      uVar1 = param_1[2];
      if (uVar1 <= uVar4) goto LAB_ram_4807a1b0;
    }
LAB_ram_4807a172:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
joined_r0x4807a20a:
    if (cVar3 == '\0') {
      return;
    }
LAB_ram_4807a178:
    iVar2 = FUN_ram_48071b5e(auStack_4c4,0x4b3,param_2,&uStack_4c8);
  }
  else {
    cVar3 = *(char *)((int)param_1 + 0xd);
    if (cVar3 == '\0') goto LAB_ram_4807a178;
    uVar4 = param_1[1];
    uVar1 = param_1[2];
    if (uVar4 < uVar1) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      iVar2 = FUN_ram_48071b5e(auStack_4c4,0x4b3,param_2,&uStack_4c8);
    }
    else {
LAB_ram_4807a1b0:
      if (uVar4 - uVar1 < 0x4b3) goto LAB_ram_4807a172;
      if (cVar3 == '\0') {
        FUN_ram_4ff45158(*param_1 + uVar1,auStack_4c4,0x4b3);
        cVar3 = (char)param_1[3];
        param_1[2] = param_1[2] + 0x4b3;
        goto joined_r0x4807a20a;
      }
      FUN_ram_4ff45158(auStack_4c4,*param_1 + uVar1,0x4b3);
      param_1[2] = uVar1 + 0x4b3;
      iVar2 = FUN_ram_48071b5e(auStack_4c4,0x4b3,param_2,&uStack_4c8);
    }
  }
  if (iVar2 != 0) {
    return;
  }
LAB_ram_4807a188:
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  return;
}


