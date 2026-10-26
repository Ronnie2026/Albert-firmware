/* Firmware entry: 0x48066484 */

int FUN_ram_48066484(int param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                    int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  char ****__s;
  int iVar7;
  int iVar8;
  char ***local_e0 [3];
  char cStack_d1;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [100];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = *(int *)(param_1 + 0x40);
  iVar2 = iVar7 * 0x1d40;
  iVar6 = *(int *)(param_1 + 0x4c);
  FUN_ram_4802a8a8(local_e0,&DAT_ram_481df390);
  cVar1 = *(char *)(iVar6 + iVar2 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iVar3 = FUN_ram_4802a79a(local_e0,0x1000);
    iVar8 = iVar2 + 0x1c + iVar6;
    if (iVar3 != 0) {
      if (param_2 < 400) {
        pcVar5 = "OK";
      }
      else {
        pcVar5 = "Error";
      }
      FUN_ram_4819ad74(auStack_90,0x60,"HTTP/1.1 %d %s\r\nContent-Type: ",param_2,pcVar5);
      FUN_ram_4802ad46(local_e0,auStack_90);
      if (param_3 == (char *)0x0) {
        param_3 = "application/octet-stream";
      }
      FUN_ram_4802af2c(local_e0,param_3);
      FUN_ram_4802af2c(local_e0,"\r\nConnection: close\r\n");
      if (param_6 != -1) {
        FUN_ram_4819ad74(auStack_d0,0x40,"Content-Length: %llu\r\n");
        FUN_ram_4802af2c(local_e0,auStack_d0);
      }
      FUN_ram_4802ae48(local_e0,iVar6 + iVar2 + 0x1ccc);
      FUN_ram_4802af2c(local_e0,"\r\n");
      *(int *)(iVar7 * 0x1d40 + iVar6 + 0x1cf8) = param_2;
      __s = local_e0;
      if (-1 < cStack_d1) {
        __s = (char ****)local_e0[0];
      }
      if (*(char *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40) * 0x1d40 + 0x440) == '\x04')
      {
        param_6 = 0;
      }
      iVar6 = iVar6 + iVar7 * 0x1d40;
      if (((*(char *)(iVar6 + 0x44c) != '\0') && (*(char *)(iVar6 + 0x44c) != '\x06')) &&
         (__s != (char ****)0x0)) {
        sVar4 = strlen((char *)__s);
        if (sVar4 < 0x1001) {
          iVar2 = (**(code **)(iVar6 + 0x24))(sVar4 + 1);
          *(int *)(iVar6 + 0x458) = iVar2;
          if (iVar2 != 0) {
            FUN_ram_4ff45158(iVar2,__s,sVar4 + 1);
            *(size_t *)(iVar6 + 0x468) = sVar4;
            *(undefined4 *)(iVar6 + 0x47c) = 0;
            *(undefined4 *)(iVar6 + 0x478) = 0;
            *(undefined4 *)(iVar6 + 0x470) = 0;
            *(undefined4 *)(iVar6 + 0x46c) = 0;
            *(undefined4 *)(iVar6 + 0x490) = param_4;
            *(undefined4 *)(iVar6 + 0x494) = param_5;
            *(int *)(iVar6 + 0x474) = param_6;
            *(undefined1 *)(iVar6 + 0x44c) = 6;
            goto LAB_ram_4806663c;
          }
          FUN_ram_48065e9c(iVar8,7);
        }
        else {
          FUN_ram_48065e9c(iVar8,2);
        }
      }
      iVar3 = 0;
      goto LAB_ram_4806663c;
    }
    if (*(char *)(iVar6 + iVar2 + 0x44c) != '\0') {
      FUN_ram_48065e9c(iVar8,7);
    }
  }
  iVar3 = 0;
LAB_ram_4806663c:
  FUN_ram_4802a59e(local_e0);
  return iVar3;
}


