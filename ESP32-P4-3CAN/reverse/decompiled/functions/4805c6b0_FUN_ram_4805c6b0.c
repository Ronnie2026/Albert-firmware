/* Firmware entry: 0x4805c6b0 */

void FUN_ram_4805c6b0(int param_1,int param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_2 = param_2 * 0x28;
  iVar5 = param_1 + param_2;
  if (*(char *)(iVar5 + 0x9fa) != '\0') {
    *(undefined2 *)(param_2 + param_1 + 0x9fa) = 0;
    *(char *)(iVar5 + 0x9fd) = (char)param_3;
    *(undefined1 *)(iVar5 + 0x9fe) = param_4;
    pbVar2 = (byte *)(param_2 + 0x9d8 + param_1);
    if ((*pbVar2 < 8) && (*(int *)(pbVar2 + 8) != 0 || *(int *)(pbVar2 + 0xc) != 0)) {
      iVar6 = (uint)*pbVar2 * 0x120;
      iVar5 = param_1 + iVar6;
      if ((*(char *)(iVar5 + 0x70d6) != '\0') &&
         ((((*(int *)(iVar5 + 0x70c8) == *(int *)(pbVar2 + 8) &&
            (*(int *)(iVar5 + 0x70cc) == *(int *)(pbVar2 + 0xc))) && (param_3 != 0)) &&
          (*(char *)(iVar5 + 0x70d8) == '\0')))) {
        iVar4 = param_1 + 0x3a40;
        iVar6 = iVar6 + 0x3678 + iVar4;
        iVar7 = *(int *)(iVar6 + 0x30);
        iVar8 = *(int *)(iVar6 + 0x34);
        *(char *)(iVar5 + 0x70d9) = (char)param_3;
        *(undefined1 *)(iVar5 + 0x70d7) = 0;
        *(undefined1 *)(iVar5 + 0x70d8) = 1;
        if ((iVar7 != 0 || iVar8 != 0) && (uVar3 = (uint)*(byte *)(iVar6 + 0x29), uVar3 != 0xff)) {
          cVar1 = *(char *)(iVar6 + 0x28);
          iVar5 = 2;
          if (cVar1 == '\x02') {
            iVar5 = 1;
          }
          else if (cVar1 != '\x04') {
            if (cVar1 != '\x01') {
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return;
            }
            iVar5 = 0;
          }
          if (uVar3 < 0x18) {
            if (uVar3 < 0x10) {
              iVar5 = iVar5 * 0x1228 + uVar3 * 0xe8;
            }
            else {
              iVar5 = (uVar3 - 0x10) * 0x120;
              param_1 = param_1 + iVar5;
              if (*(char *)(param_1 + 0x70d6) == '\0') {
                gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                return;
              }
              if (*(char *)(param_1 + 0x70b8) != cVar1) {
                gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                return;
              }
              iVar5 = iVar5 + 14000;
            }
            iVar5 = iVar5 + iVar4;
            if (((*(int *)(iVar5 + 0xd8) == iVar7) && (*(int *)(iVar5 + 0xdc) == iVar8)) &&
               (*(char *)(iVar5 + 0xe6) == '\x01')) {
              FUN_ram_4804691a(iVar4,cVar1,uVar3,2,8,0);
              return;
            }
          }
        }
      }
    }
  }
  return;
}


