/* Firmware entry: 0x480c6f6c */

void FUN_ram_480c6f6c(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  char cVar10;
  undefined1 uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = param_1[0xa0];
  uVar2 = *(undefined1 *)((int)param_1 + 0x283);
  if (((char)iVar7 == '\0') || (*(char *)((int)param_1 + 0x281) == '\0')) {
LAB_ram_480c6f9c:
    cVar10 = '\0';
    uVar11 = 0;
  }
  else {
    cVar10 = *(char *)((int)param_1 + 0x282);
    uVar11 = 0;
    if ((cVar10 != '\0') && (uVar11 = uVar2, 0x5dc < (uint)(param_2 - param_1[0xa2])))
    goto LAB_ram_480c6f9c;
  }
  iVar9 = *param_1;
  iVar6 = iVar9 + 0xb18;
  uVar1 = *(undefined1 *)((int)param_1 + 0x285);
  iVar4 = param_1[0xa1];
  FUN_ram_4ff3ec14(iVar6,0xffffffff);
  bVar5 = *(byte *)(iVar9 + 0xbd5);
  FUN_ram_4ff3ee10(iVar6);
  if ((((char)param_1[0xa0] == '\0') || (*(char *)((int)param_1 + 0x281) == '\0')) ||
     (*(char *)((int)param_1 + 0x282) == '\0')) {
    bVar5 = 10;
    cVar8 = '\0';
  }
  else {
    cVar3 = *(char *)((int)param_1 + 0x283);
    cVar8 = cVar3;
    if ((uint)(param_2 - param_1[0xa2]) < 0x5dd) {
      if ((char)param_1[0xa1] != '\0') {
        if (cVar3 == '\0') {
          bVar5 = 10;
        }
        else {
          bVar5 = *(byte *)((int)param_1 + 0x285) & (char)~*(byte *)((int)param_1 + 0x285) >> 0x1f;
          if ('<' < (char)bVar5) {
            bVar5 = 0x3c;
          }
        }
        goto LAB_ram_480c6fe2;
      }
      if (0x3c < bVar5) {
        bVar5 = 0x3c;
      }
    }
    else {
      bVar5 = 10;
    }
    cVar8 = '\0';
    if (((uint)(param_2 - param_1[0xa2]) < 0x5dd) && (cVar8 = '\x02', (char)param_1[0xa1] != '\0'))
    {
      cVar8 = cVar3;
    }
  }
LAB_ram_480c6fe2:
  FUN_ram_4ff3ec14(param_1[2],0xffffffff);
  iVar9 = param_1[1];
  *(undefined1 *)(iVar9 + 0x808) = uVar1;
  iVar6 = param_1[1];
  *(char *)(iVar9 + 0x805) = (char)iVar7;
  *(undefined1 *)(iVar9 + 0x806) = uVar11;
  *(undefined1 *)(iVar9 + 0x807) = uVar2;
  *(byte *)(iVar6 + 0x809) = bVar5;
  iVar6 = param_1[1];
  *(char *)(iVar6 + 0x80c) = cVar8;
  iVar7 = param_1[2];
  *(char *)(iVar6 + 0x80a) = cVar10;
  *(char *)(iVar6 + 0x80b) = (char)iVar4;
  FUN_ram_4ff3ee10(iVar7);
  return;
}


